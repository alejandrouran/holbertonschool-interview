#!/usr/bin/node

const request = require('request');

const movieId = process.argv[2] + '/';
const movieURL = 'https://swapi-api.hbtn.io/api/films/';

// Makes API request, sets async to allow await promise
request(movieURL + movieId, async function (err, res, body) {
  if (err) return console.error(err);

  // find URLs of each character in the film as a list obj
  const charURLList = JSON.parse(body).characters;

  // Use URL list to character pages to make new requests
  // await queues requests until they resolve in order
  for (const charURL of charURLList) {
    await new Promise(function (resolve, reject) {
      request(charURL, function (err, res, body) {
        if (err) return console.error(err);

        // finds each character name and prints in URL order
        console.log(JSON.parse(body).name);
        resolve();
      });
    });
  }
});
