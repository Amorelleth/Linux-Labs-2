Name:          b18-505-10
Version:       1.0
Release:       1%{?dist}
Summary:       Программа студента Козловской. А.  группы Б18-505
Group:         Testing
License:       GPL
URL:           https://github.com/Amorelleth/Linux-Labs-2
Source0:       %{name}-%{version}.tar.gz
BuildRequires: /bin/rm, /bin/mkdir, /bin/cp
Requires:      /bin/bash, /usr/bin/date
BuildArch:     noarch

%description
A test package

%prep
%setup -q

%install
mkdir -p %{buildroot}%{_bindir}
install -m 755 b18-505-10 %{buildroot}%{_bindir}

%files
%{_bindir}/b18-505-10

%changelog
* Thu Oct 16 2012 Козловская
- Added %{_bindir}/b18-505-10
