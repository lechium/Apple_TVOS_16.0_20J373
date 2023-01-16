//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ICDelegationServiceSecuritySettings : NSObject
{
    long long _securityMode;	// 8 = 0x8
    NSString *_password;	// 16 = 0x10
}

+ (void)getDeviceSenderSettingsForReceiverName:(id)arg1 securityMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000017b755
+ (void)getDeviceReceiverSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000017b6ae
- (void).cxx_destruct;	// IMP=0x000000000017b69e
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) long long securityMode; // @synthesize securityMode=_securityMode;
- (id)description;	// IMP=0x000000000017b5fa
- (id)_init;	// IMP=0x000000000017b5cb

@end

