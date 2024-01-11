factorial :: Integer -> Integer
factorial 0 = 1
factorial x = x * factorial (x - 1)

digitsSum :: String -> Integer
digitsSum [] = 0
digitsSum (x:xs) =
  (read [x] :: Integer) + digitsSum(xs)

main :: IO ()
main = do
  let f100 = factorial 100
  let sf100 = show f100
  print (digitsSum sf100)
