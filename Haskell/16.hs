-- 16 - Power Digit Sum

digitsSum :: String -> Integer
digitsSum [] = 0
digitsSum (x:xs) =
  (read [x] :: Integer) + digitsSum xs

main :: IO ()
main = do
  print (digitsSum (show (2 ^ 1000)))
