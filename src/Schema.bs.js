// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';

var GraphqlTools             = require("graphql-tools");
var Posts$AuthorsAndPosts    = require("./Posts.bs.js");
var Query$AuthorsAndPosts    = require("./Query.bs.js");
var Author$AuthorsAndPosts   = require("./Author.bs.js");
var Mutation$AuthorsAndPosts = require("./Mutation.bs.js");

var typeDefs = Query$AuthorsAndPosts.typeDef + (Mutation$AuthorsAndPosts.typeDef + (Author$AuthorsAndPosts.typeDef + Posts$AuthorsAndPosts.typeDef));

var resolvers = {
  Query: Query$AuthorsAndPosts.resolvers,
  Mutation: Mutation$AuthorsAndPosts.resolvers,
  Author: Author$AuthorsAndPosts.resolvers,
  Post: Posts$AuthorsAndPosts.resolvers
};

var schema = GraphqlTools.makeExecutableSchema({
      typeDefs: typeDefs,
      resolvers: resolvers
    });

exports.typeDefs  = typeDefs;
exports.resolvers = resolvers;
exports.schema    = schema;
/* schema Not a pure module */
