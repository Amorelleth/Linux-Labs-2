Name:       c-b18-505-10
Version:    1.0
Release:    1%{?dist}
Summary:    Программа студента Козловской А. группы Б18-505
Group:      Testing
License:    GPL
URL:        https://github.com/Amorelleth/Linux-Labs-2
Source:     %{name}-%{version}.tar.gz
BuildRequires: gcc

%description
A test package

%prep
%setup -q

%build
gcc c-b18-505-10.c -o c-b18-505-10

%install
mkdir -p %{buildroot}%{_bindir}
cp c-b18-505-10 %{buildroot}%{_bindir}

%files
%{_bindir}/c-b18-505-10

%changelog
* Thu Oct 16 2012 Козловская
- Added %{_bindir}/c-b18-505-10
