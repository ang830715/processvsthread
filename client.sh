#!/bin/bash

for i in {1..2000} ; do
  ./tcp_client 127.0.0.1 12321
done