//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDKeychainPasswordItem : NSObject
{
    MISSING_TYPE *service;	// 8 = 0x8
    MISSING_TYPE *accessGroup;	// 24 = 0x18
    MISSING_TYPE *account;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00400000002e7f70
- (id)init;	// IMP=0x00100000002e7f10
- (_Bool)deleteItemAndReturnError:(id *)arg1;	// IMP=0x00100000002e7ea0
- (_Bool)savePassword:(id)arg1 error:(id *)arg2;	// IMP=0x00100000002e7c60
- (id)readPasswordAndReturnError:(id *)arg1;	// IMP=0x00100000002e7680
- (id)initWithService:(id)arg1 account:(id)arg2 accessGroup:(id)arg3;	// IMP=0x00100000002e7150

@end

