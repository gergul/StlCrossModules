#pragma once

#if (__cplusplus > 199711L) || \
	(defined(_MSC_VER) && _MSC_VER >= 1600) || \
	(defined(__GNUC__) && (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__ >= 40603) )
#define CPP11
#endif

#include "StlHeapAlloc.h"
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <sstream>

#ifdef CPP11
#include <forward_list>
#include <unordered_set>
#include <unordered_map>
#endif


#ifndef _NOEXCEPT
#define _NOEXCEPT
#endif

namespace GL
{
	/************************************************************************/
	/* string wstring                                                       */
	/************************************************************************/
	typedef std::basic_string<char, std::char_traits<char>, STLHeapAlloc<char>> string;
	typedef std::basic_string<wchar_t, std::char_traits<wchar_t>, STLHeapAlloc<wchar_t>> wstring;

	/************************************************************************/
	/* basic_stringbuf                                                      */
	/************************************************************************/
	typedef std::basic_stringbuf<char, std::char_traits<char>, STLHeapAlloc<char> > stringbuf;
	typedef std::basic_stringbuf<wchar_t, std::char_traits<wchar_t>, STLHeapAlloc<wchar_t> > wstringbuf;

	/************************************************************************/
	/* basic_istringstream                                                  */
	/************************************************************************/
	typedef std::basic_istringstream<char, std::char_traits<char>, STLHeapAlloc<char> > istringstream;
	typedef std::basic_istringstream<wchar_t, std::char_traits<wchar_t>, STLHeapAlloc<wchar_t> > wistringstream;

	/************************************************************************/
	/* basic_ostringstream                                                  */
	/************************************************************************/
	typedef std::basic_ostringstream<char, std::char_traits<char>, STLHeapAlloc<char> > ostringstream;
	typedef std::basic_ostringstream<wchar_t, std::char_traits<wchar_t>, STLHeapAlloc<wchar_t> > wostringstream;

	/************************************************************************/
	/* basic_stringstream                                                   */
	/************************************************************************/
	typedef std::basic_stringstream<char, std::char_traits<char>, STLHeapAlloc<char> > stringstream;
	typedef std::basic_stringstream<wchar_t, std::char_traits<wchar_t>, STLHeapAlloc<wchar_t> > wstringstream;

	/************************************************************************/
	/* vector                                                               */
	/************************************************************************/
	template<class _Ty,
		class _Alloc = STLHeapAlloc<_Ty> >
	class vector
		: public std::vector<_Ty, _Alloc>
	{
	public:
		typedef std::vector<_Ty, _Alloc> _BaseClass;

	public:
		vector() _NOEXCEPT
			: _BaseClass()
		{	// construct empty vector
		}

		explicit vector(const allocator_type& _Al) _NOEXCEPT
			: _BaseClass(_Al)
		{	// construct empty vector, allocator
		}

		explicit vector(size_type _Count)
			: _BaseClass(_Count)
		{
		}

		vector(size_type _Count, const value_type& _Val)
			: _BaseClass(_Count, _Val)
		{
		}

		vector(size_type _Count, const value_type& _Val, const allocator_type& _Al)
			: _BaseClass(_Count, _Val, _Al)
		{
		}

		vector(const vector& _Right)
			: _BaseClass(_Right)
		{
		}

		vector(const vector& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		template<class _Iter>
		vector(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		vector(_Iter _First, _Iter _Last, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Al)
		{
		}
	};

	/************************************************************************/
	/* deque                                                                */
	/************************************************************************/
	template<class _Ty,
		class _Alloc = STLHeapAlloc<_Ty> >
	class deque
		: public std::deque<_Ty, _Alloc>
	{
	public:
		typedef std::deque<_Ty, _Alloc> _BaseClass;

	public:
		deque()
		{
		}

		explicit deque(const _Alloc& _Al)
			: _BaseClass(_Al)
		{
		}

		explicit deque(size_type _Count)
			: _BaseClass(_Count)
		{
		}

		deque(size_type _Count, const value_type& _Val)
			: _BaseClass(_Count, _Val)
		{
		}

		deque(size_type _Count, const value_type& _Val, const _Alloc& _Al)
			: _BaseClass(_Count, _Val, _Al)
		{
		}

		deque(const deque& _Right)
			: _BaseClass(_Right)
		{
		}

		deque(const deque& _Right, const _Alloc& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		template<class _Iter>
			deque(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
			deque(_Iter _First, _Iter _Last, const _Alloc& _Al)
			: _BaseClass(_First, _Last, _Al)
		{
		}			
	};

	/************************************************************************/
	/* list                                                                 */
	/************************************************************************/
	template<class _Ty,
		class _Alloc = STLHeapAlloc<_Ty> >
	class list
		: public std::list<_Ty, _Alloc>
	{
	public:
		typedef std::list<_Ty, _Alloc> _BaseClass;

	public:
		list()
		{
		}

		explicit list(const _Alloc& _Al)
			: _BaseClass(_Al)
		{
		}

		explicit list(size_type _Count)
			: _BaseClass(_Count)
		{
		}

		list(size_type _Count, const _Ty& _Val)
			: _BaseClass(_Count, _Val)
		{
		}

		list(size_type _Count, const _Ty& _Val, const _Alloc& _Al)
			: _BaseClass(_Count, _Val, _Al)
		{
		}

		list(const list& _Right)
			: _BaseClass(_Right)
		{
		}

		list(const list& _Right, const _Alloc& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		template<class _Iter>
			list(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
			list(_Iter _First, _Iter _Last, const _Alloc& _Al)
			: _BaseClass(_First, _Last, _Al)
		{
		}
	};

#ifdef CPP11
	/************************************************************************/
	/* forward_list                                                         */
	/************************************************************************/
	template<class _Ty,
		class _Alloc = STLHeapAlloc<_Ty> >
	class forward_list
		: public std::forward_list<_Ty, _Alloc>
	{
	public:
		typedef std::forward_list<_Ty, _Alloc> _BaseClass;

	public:
		~forward_list() _NOEXCEPT
		{
			//_Tidy();
			_BaseClass::~forward_list();
		}

		forward_list()
		{
		}

		explicit forward_list(size_type _Count)
			: _BaseClass(_Count)
		{
		}

		forward_list(size_type _Count, const _Ty& _Val)
			: _BaseClass(_Count, _Val)
		{
		}

		forward_list(size_type _Count, const _Ty& _Val, const _Alloc& _Al)
			: _BaseClass(_Count, _Val, _Al)
		{
		}

		explicit forward_list(const _Alloc& _Al)
			: _BaseClass(_Al)
		{
		}

		forward_list(const forward_list& _Right)
			: _BaseClass(_Right)
		{
		}

		forward_list(const forward_list& _Right, const _Alloc& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		template<class _Iter>
			forward_list(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
			forward_list(_Iter _First, _Iter _Last, const _Alloc& _Al)
			: _BaseClass(_First, _Last, _Al)
		{
		}

		forward_list(forward_list&& _Right)
			: _BaseClass(_Right)
		{
		}

		forward_list(forward_list&& _Right, const _Alloc& _Al)
			: _BaseClass(_Right, _Al)
		{
		}
	};
#endif

	/************************************************************************/
	/* set                                                                  */
	/************************************************************************/
	template<class _Kty,
		class _Pr = std::less<_Kty>,
		class _Alloc = STLHeapAlloc<_Kty> >
	class set
		: public std::set<_Kty, _Pr, _Alloc>
	{
	public:
		typedef std::set<_Kty, _Pr, _Alloc> _BaseClass;

	public:
		set()
		{
		}

		explicit set(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		set(const set& _Right)
			: _BaseClass(_Right)
		{
		}

		set(const set& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit set(const key_compare& _Pred)
			: _BaseClass(_Pred)
		{
		}

		set(const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_Pred, _Al)
		{
		}

		template<class _Iter>
		set(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		set(_Iter _First, _Iter _Last,
			const key_compare& _Pred)
			: _BaseClass(_First, _Last, _Pred)
		{
		}

		template<class _Iter>
		set(_Iter _First, _Iter _Last,
			const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Pred, _Al)
		{
		}
	};

	/************************************************************************/
	/* multiset                                                             */
	/************************************************************************/
	template<class _Kty,
		class _Pr = std::less<_Kty>,
		class _Alloc = STLHeapAlloc<_Kty> >
	class multiset
		: public std::multiset<_Kty, _Pr, _Alloc>
	{
	public:
		typedef std::multiset<_Kty, _Pr, _Alloc> _BaseClass;

	public:
		multiset()
		{
		}

		explicit multiset(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		multiset(const multiset& _Right)
			: _BaseClass(_Right)
		{
		}

		multiset(const multiset& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit multiset(const key_compare& _Pred)
			: _BaseClass(_Pred)
		{
		}

		multiset(const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_Pred, _Al)
		{
		}

		template<class _Iter>
		multiset(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		multiset(_Iter _First, _Iter _Last,
			const key_compare& _Pred)
			: _BaseClass(_First, _Last, _Pred)
		{
		}

		template<class _Iter>
		multiset(_Iter _First, _Iter _Last,
			const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Pred, _Al)
		{
		}
	};

	/************************************************************************/
	/* map                                                                  */
	/************************************************************************/
	template<class _Kty,
		class _Ty,
		class _Pr = std::less<_Kty>,
		class _Alloc = STLHeapAlloc<std::pair<_Kty, _Ty> > >
	class map
		: public std::map<_Kty, _Ty, _Pr, _Alloc>
	{
	public:
		typedef std::map<_Kty, _Ty, _Pr, _Alloc> _BaseClass;

	public:
		map()
		{
		}

		explicit map(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		map(const map& _Right)
			: _BaseClass(_Right)
		{
		}

		map(const map& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit map(const key_compare& _Pred)
			: _BaseClass(_Pred)
		{
		}

		map(const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_Pred, _Al)
		{
		}

		template<class _Iter>
		map(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		map(_Iter _First, _Iter _Last,
			const key_compare& _Pred)
			: _BaseClass(_First, _Last, _Pred)
		{
		}

		template<class _Iter>
		map(_Iter _First, _Iter _Last,
			const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Pred, _Al)
		{
		}
	};

	/************************************************************************/
	/* multimap                                                             */
	/************************************************************************/
	template<class _Kty,
		class _Ty,
		class _Pr = std::less<_Kty>,
		class _Alloc = STLHeapAlloc<std::pair<_Kty, _Ty> > >
	class multimap
		: public std::multimap<_Kty, _Ty, _Pr, _Alloc>
	{
	public:
		typedef std::multimap<_Kty, _Ty, _Pr, _Alloc> _BaseClass;

	public:
		multimap()
		{
		}

		explicit multimap(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		multimap(const multimap& _Right)
			: _BaseClass(_Right)
		{
		}

		multimap(const multimap& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit multimap(const key_compare& _Pred)
			: _BaseClass(_Pred)
		{
		}

		multimap(const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_Pred, _Al)
		{
		}

		template<class _Iter>
		multimap(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		multimap(_Iter _First, _Iter _Last,
			const key_compare& _Pred)
			: _BaseClass(_First, _Last, _Pred)
		{
		}

		template<class _Iter>
		multimap(_Iter _First, _Iter _Last,
			const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Pred, _Al)
		{
		}
	};

#ifdef CPP11
	/************************************************************************/
	/* unordered_set                                                        */
	/************************************************************************/
	template<class _Kty,
		class _Hasher = std::hash<_Kty>,
		class _Keyeq = std::equal_to<_Kty>,
		class _Alloc = STLHeapAlloc<_Kty> >
	class unordered_set
		: public std::unordered_set<_Kty, _Hasher, _Keyeq, _Alloc>
	{
	public:
		typedef std::unordered_set<_Kty, _Hasher, _Keyeq, _Alloc> _BaseClass;

	public:
		unordered_set()
		{
		}

		explicit unordered_set(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		unordered_set(const unordered_set& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_set(const unordered_set& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit unordered_set(size_type _Buckets)
			: _BaseClass(_Buckets)
		{
		}

		unordered_set(size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_Buckets, _Hasharg)
		{
		}

		unordered_set(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg)
		{
		}

		unordered_set(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		template<class _Iter>
		unordered_set(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		unordered_set(_Iter _First, _Iter _Last,
			size_type _Buckets)
			: _BaseClass(_First, _Last, _Buckets)
		{
		}

		template<class _Iter>
		unordered_set(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg)
		{
		}

		template<class _Iter>
		unordered_set(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg)
		{
		}

		template<class _Iter>
		unordered_set(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		unordered_set(unordered_set&& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_set(unordered_set&& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}
	};

	/************************************************************************/
	/* unordered_multiset                                                   */
	/************************************************************************/
	template<class _Kty,
		class _Hasher = std::hash<_Kty>,
		class _Keyeq = std::equal_to<_Kty>,
		class _Alloc = STLHeapAlloc<_Kty> >
	class unordered_multiset
		: public std::unordered_multiset<_Kty, _Hasher, _Keyeq, _Alloc>
	{
	public:
		typedef std::unordered_multiset<_Kty, _Hasher, _Keyeq, _Alloc> _BaseClass;

	public:
		unordered_multiset()
		{
		}

		explicit unordered_multiset(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		unordered_multiset(const unordered_multiset& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_multiset(const unordered_multiset& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit unordered_multiset(size_type _Buckets)
			: _BaseClass(_Buckets)
		{
		}

		unordered_multiset(size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_Buckets, _Hasharg)
		{
		}

		unordered_multiset(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg)
		{
		}

		unordered_multiset(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		template<class _Iter>
		unordered_multiset(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		unordered_multiset(_Iter _First, _Iter _Last,
			size_type _Buckets)
			: _BaseClass(_First, _Last, _Buckets)
		{
		}

		template<class _Iter>
		unordered_multiset(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg)
		{
		}

		template<class _Iter>
		unordered_multiset(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg)
		{
		}

		template<class _Iter>
		unordered_multiset(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		unordered_multiset(unordered_multiset&& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_multiset(unordered_multiset&& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}
	};

	/************************************************************************/
	/* unordered_map                                                        */
	/************************************************************************/
	template<class _Kty,
		class _Ty,
		class _Hasher = std::hash<_Kty>,
		class _Keyeq = std::equal_to<_Kty>,
		class _Alloc = STLHeapAlloc<std::pair<const _Kty, _Ty> > >
	class unordered_map
		: public std::unordered_map<_Kty, _Ty, _Hasher, _Keyeq, _Alloc>
	{
	public:
		typedef std::unordered_map<_Kty, _Ty, _Hasher, _Keyeq, _Alloc> _BaseClass;

	public:
		unordered_map()
		{
		}

		explicit unordered_map(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		unordered_map(const unordered_map& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_map(const unordered_map& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit unordered_map(size_type _Buckets)
			: _BaseClass(_Buckets)
		{
		}

		unordered_map(size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_Buckets, _Hasharg)
		{
		}

		unordered_map(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg)
		{
		}

		unordered_map(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		template<class _Iter>
		unordered_map(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		unordered_map(_Iter _First, _Iter _Last,
			size_type _Buckets)
			: _BaseClass(_First, _Last, _Buckets)
		{
		}

		template<class _Iter>
		unordered_map(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg)
		{
		}

		template<class _Iter>
		unordered_map(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg)
		{
		}

		template<class _Iter>
		unordered_map(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		unordered_map(unordered_map&& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_map(unordered_map&& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}
	};

	/************************************************************************/
	/* unordered_multimap                                                   */
	/************************************************************************/
	template<class _Kty,
		class _Ty,
		class _Hasher = std::hash<_Kty>,
		class _Keyeq = std::equal_to<_Kty>,
		class _Alloc = STLHeapAlloc<std::pair<const _Kty, _Ty> > >
	class unordered_multimap
		: public std::unordered_multimap<_Kty, _Ty, _Hasher, _Keyeq, _Alloc>
	{
	public:
		typedef std::unordered_multimap<_Kty, _Ty, _Hasher, _Keyeq, _Alloc> _BaseClass;

	public:
		unordered_multimap()
		{
		}

		explicit unordered_multimap(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		unordered_multimap(const unordered_multimap& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_multimap(const unordered_multimap& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit unordered_multimap(size_type _Buckets)
			: _BaseClass(_Buckets)
		{
		}

		unordered_multimap(size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_Buckets, _Hasharg)
		{
		}

		unordered_multimap(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg)
		{
		}

		unordered_multimap(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		template<class _Iter>
		unordered_multimap(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		unordered_multimap(_Iter _First, _Iter _Last,
			size_type _Buckets)
			: _BaseClass(_First, _Last, _Buckets)
		{
		}

		template<class _Iter>
		unordered_multimap(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg)
		{
		}

		template<class _Iter>
		unordered_multimap(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg)
		{
		}

		template<class _Iter>
		unordered_multimap(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		unordered_multimap(unordered_multimap&& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_multimap(unordered_multimap&& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}
	};
#endif
}
