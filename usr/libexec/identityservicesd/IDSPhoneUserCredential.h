//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSPhoneUserCredential : NSObject
{
    NSString *_smsSignature;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000617e90
@property(readonly, nonatomic) NSString *smsSignature; // @synthesize smsSignature=_smsSignature;
- (long long)realm;	// IMP=0x0010000000617e60
- (id)initWithSMSSignature:(id)arg1;	// IMP=0x0010000000617d80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

