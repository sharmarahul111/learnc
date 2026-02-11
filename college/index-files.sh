#!/usr/bin/env bash

output="links.md"
>"$output" # clear file

find . -type f -name "*.c" | while read -r file; do
  # read first line
  read -r first_line <"$file"

  comment=""

  # match // comment
  if [[ $first_line =~ ^[[:space:]]*//[[:space:]]*(.*) ]]; then
    comment="${BASH_REMATCH[1]}"
  fi

  # if comment exists, write markdown link
  if [[ -n "$comment" ]]; then
    echo "- [$comment]($file)" >>"$output"
  fi
done
