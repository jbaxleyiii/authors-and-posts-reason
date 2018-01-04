type author = {. "id": int, "firstName": string, "lastName": string};

let authors = [|
  {"id": 1, "firstName": "Tom", "lastName": "Coleman"},
  {"id": 2, "firstName": "Sashko", "lastName": "Stubailo"},
  {"id": 3, "firstName": "Mikhail", "lastName": "Novikov"}
|];

type post = {. "id": int, "authorId": int, "title": string, "votes": ref(int)};

let posts = [|
  {"id": 1, "authorId": 1, "title": "Introduction to GraphQL", "votes": ref(2)},
  {"id": 2, "authorId": 2, "title": "Welcome to Apollo", "votes": ref(3)},
  {"id": 3, "authorId": 2, "title": "Advanced GraphQL", "votes": ref(1)},
  {"id": 4, "authorId": 3, "title": "Launchpad is Cool", "votes": ref(7)}
|];
