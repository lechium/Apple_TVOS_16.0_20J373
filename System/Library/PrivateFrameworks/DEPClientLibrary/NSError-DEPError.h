//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (DEPError)
+ (id)DEPErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7;	// IMP=0x0050000000005e3f
+ (id)DEPErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5;	// IMP=0x0050000000005e18
+ (id)DEPErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 errorType:(id)arg4;	// IMP=0x0050000000005dee
- (id)DEPFindPrimaryError;	// IMP=0x00100000000062ef
- (id)DEPUSEnglishDescription;	// IMP=0x0010000000006298
@end

