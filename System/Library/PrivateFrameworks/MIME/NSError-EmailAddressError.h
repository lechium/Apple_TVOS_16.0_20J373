//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (EmailAddressError)
+ (id)mf_illegalEmailAddressErrorWithAddress:(id)arg1;	// IMP=0x00500000000080fe
+ (id)mf_decodeFailedErrorWithUserInfo:(id)arg1;	// IMP=0x005000000003e0b8
+ (id)mf_timeoutError;	// IMP=0x005000000003e097
+ (id)mf_cancelledError;	// IMP=0x005000000003e073
- (CDUnknownBlockType)mf_match;	// IMP=0x001000000002cb97
- (_Bool)mf_isTimeoutError;	// IMP=0x001000000003e103
- (_Bool)mf_isCancelledError;	// IMP=0x001000000003e0d9
@end

