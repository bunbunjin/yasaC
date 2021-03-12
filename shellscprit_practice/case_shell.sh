#!/bin/bash
case '$str' in
  'hoge' ) echo 'hoge'
           echo 'hoge' ;;
  'fuga' ) echo '' ;;
  * ) echo  'unknown' ;;
esac
