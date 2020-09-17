list="
v2019.6
v2020.2
v2020.3
"

for tag in $list
do
  {
    echo "patch -p 1 << EOF"
    git diff -p  $tag $tag-crescale
    echo "EOF"
  } > patch-$tag
done
