//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (PHAErrorExtensions)
+ (id)phaUnexpectedConditionErrorWithUserInfo:(id)arg1;	// IMP=0x00800000000615c8
+ (id)phaObjectNotFoundErrorWithLocalizedDescription:(id)arg1;	// IMP=0x00800000000615ae
+ (id)phaErrorForInvalidParameterValue:(id)arg1 named:(id)arg2;	// IMP=0x0080000000061537
+ (id)phaErrorWithCode:(long long)arg1 localizedDescription:(id)arg2;	// IMP=0x00800000000614b7
+ (id)phaErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00800000000613a4
@end
