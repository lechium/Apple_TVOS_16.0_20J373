//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SDAppleIDVerifiedIdentity : NSObject
{
    NSString *_accountIdentifier;	// 8 = 0x8
    NSString *_emailOrPhone;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000118955
@property(readonly, nonatomic) NSString *emailOrPhone; // @synthesize emailOrPhone=_emailOrPhone;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)initWithAccountIdentifier:(id)arg1 emailOrPhone:(id)arg2;	// IMP=0x00100000001188a8

@end

