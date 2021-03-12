#!/bin/bash
if [ 0 -eq 0 ]; then
  echo 'equal.'
fi

reda str
if [ '$str' = 'hoge' ]; then
  echo 'hoge'
elif [ '$str' = 'fuga' ]; then
  echo 'fuga'
else
  echo 'unknown'
fi
