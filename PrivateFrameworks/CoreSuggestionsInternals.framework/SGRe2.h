/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGRe2 : NSObject {
    BOOL _isTrivial;
    long _isTrivialOnceToken;
    struct RE2 { struct Mutex {} *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct Options { int x_3_1_1; bool x_3_1_2; bool x_3_1_3; bool x_3_1_4; long long x_3_1_5; bool x_3_1_6; bool x_3_1_7; bool x_3_1_8; bool x_3_1_9; bool x_3_1_10; bool x_3_1_11; bool x_3_1_12; bool x_3_1_13; } x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; bool x5; struct Regexp {} *x6; struct Regexp {} *x7; struct Prog {} *x8; struct Prog {} *x9; bool x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; int x12; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_13_1_1; } x13; int x14; struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int> > > {} *x15; struct map<int, std::__1::basic_string<char>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::basic_string<char> > > > {} *x16; } *_pattern;
    char *_patternString;
    NSArray *_subregexps;
}

+ (id)convertPerlStyleLiteralToRegexpString:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned int)arg3 block:(id /* block */)arg4;
- (void)dealloc;
- (id)description;
- (void)enumerateMatchesInString:(id)arg1 ngroups:(unsigned int)arg2 block:(id /* block */)arg3;
- (void)enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned int)arg3 block:(id /* block */)arg4;
- (BOOL)existsInString:(id)arg1;
- (BOOL)existsInUtf8:(const char *)arg1;
- (id)initWithRegexp:(id)arg1;
- (id)initWithSubregexps:(id)arg1;
- (BOOL)isTrivial;
- (BOOL)matchesString:(id)arg1;
- (BOOL)matchesUtf8:(const char *)arg1;
- (id)traceMatchesInString:(id)arg1;

@end
