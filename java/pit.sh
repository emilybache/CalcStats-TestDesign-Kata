#!/usr/bin/env bash

# see http://pitest.org/quickstart/maven/
mvn test-compile org.pitest:pitest-maven:mutationCoverage
