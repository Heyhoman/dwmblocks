pkgname=dwmblocks
pkgver=63.96cbb45
pkgrel=1
pkgdesc="Modular status bar for dwm written in c"
arch=('x86_64')
url="https://github.com/torrinfail/dwmblocks"
license=('ISC')
depends=('libx11')
options=(zipman)
source=("$pkgname::git+https://github.com/torrinfail/dwmblocks.git"
	blocks.h)
sha256sums=('SKIP'
            '9069a5dbe2953247637b345ea4f7aff0d55ca1dbe7ad5260912cae91a7dfc161')
pkgver() {
  cd "$srcdir/$pkgname"
  printf "%s.%s" "$(git rev-list --count HEAD)" "$(git rev-parse --short HEAD)"
}

prepare() {
  cd "$srcdir/$pkgname"
  cp "$srcdir/blocks.h" blocks.h
}

build() {
  cd "$srcdir/$pkgname"
  make X11INC=/usr/include/X11 X11LIB=/usr/lib/X11
}

package() {
  cd "$srcdir/$pkgname"
  make PREFIX=/usr DESTDIR="$pkgdir" install
  install -m644 -D LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"
  install -m644 -D README.md "$pkgdir/usr/share/doc/$pkgname/README"
}
