
type awesome: record
  a : string
  b : integer

proc Test : {m, n} => ([type awesome/boolean] input, boolean/type awesome output)
  # Empty process