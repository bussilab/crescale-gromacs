list="$( git tag | grep "\-crescale" | sed "s/-.*//")"

for tag in $list
do
  {
    echo "patch -p 1 << EOF"
    git diff -p  $tag $tag-crescale
    echo "EOF"
  } > patch-$tag
done
