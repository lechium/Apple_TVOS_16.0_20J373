//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (LPExtras)
+ (void)_lp_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x005000000000145a
- (id)_lp_userVisibleHost;	// IMP=0x0010000000001066
- (id)_lp_stringByTrimmingWhitespace;	// IMP=0x001000000000138c
- (id)_lp_stringByDeletingUsernameAndPassword;	// IMP=0x00100000000012df
- (id)_lp_stringByDeletingTrailingSlash;	// IMP=0x0010000000001279
- (id)_lp_hostByStrippingTopLevelDomain;	// IMP=0x001000000000114c
- (id)_lp_stringForcingLeftToRightDirection;	// IMP=0x0010000000001127
- (_Bool)_lp_hasCaseInsensitivePrefix:(id)arg1;	// IMP=0x00100000000010b9
- (id)_lp_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(_Bool)arg2;	// IMP=0x0010000000001bed
- (id)_lp_highLevelDomainFromHost;	// IMP=0x0010000000001b33
- (unsigned long long)_lp_lengthOfDeepSubdomainsFromComponents:(id)arg1;	// IMP=0x0010000000001a2f
- (id)_lp_highLevelDomainFromComponents:(id)arg1 indexOfFirstHighLevelDomainComponent:(unsigned long long *)arg2 indexOfFirstTopLevelDomainComponent:(unsigned long long *)arg3;	// IMP=0x00100000000016db
- (_Bool)_lp_hasCaseInsensitiveSubstring:(id)arg1 startingAt:(unsigned long long)arg2;	// IMP=0x00100000000013cb
@end

