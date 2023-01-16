//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKAuthenticationMachine : NSObject
{
    long long _loginCancelledCount;	// 8 = 0x8
    NSString *_accountName;	// 16 = 0x10
    long long _serverEnvironment;	// 24 = 0x18
}

+ (void)migratePreSundanceAccountInformation;	// IMP=0x00200000000ac639
+ (void)migratePreBlacktailAccountInformation;	// IMP=0x00100000000ac000
+ (id)authMachineForEnvironment:(long long)arg1;	// IMP=0x00100000000abe63
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000abe5b
- (void).cxx_destruct;	// IMP=0x00200000000ace27
@property(nonatomic) long long serverEnvironment; // @synthesize serverEnvironment=_serverEnvironment;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(nonatomic) long long loginCancelledCount; // @synthesize loginCancelledCount=_loginCancelledCount;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000abf3b
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000abe6b

@end
