//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIMecabraCandidate.h>

@interface TIMecabraCandidate (TextInputCore)
+ (id)mecabraCandidateWithCandidateRef:(const void *)arg1 autoconvertedCandidates:(id)arg2;	// IMP=0x0050000000168bcd
+ (id)displayReadingFromMecabraCandidate:(void *)arg1;	// IMP=0x005000000016861f
+ (id)dictionaryReadingFromMecabraCandidate:(void *)arg1;	// IMP=0x0050000000168612
+ (id)convertedInputFromMecabraCandidate:(void *)arg1;	// IMP=0x0050000000168605
- (id)initWithMecabraCandidate:(const void *)arg1 input:(id)arg2 cursorMovement:(long long)arg3;	// IMP=0x0010000000168203
- (id)initWithMecabraCandidate:(const void *)arg1 cursorMovement:(long long)arg2;	// IMP=0x00100000001681ec
- (id)initWithMecabraCandidate:(const void *)arg1 input:(id)arg2;	// IMP=0x00100000001681d7
- (id)initWithMecabraCandidate:(const void *)arg1;	// IMP=0x00100000001681c3
@end

