//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PurchaseIntentDatabaseRow : NSObject
{
    NSString *_productIdentifier;	// 8 = 0x8
    NSString *_appBundleId;	// 16 = 0x10
    NSNumber *_timestamp;	// 24 = 0x18
    NSString *_productName;	// 32 = 0x20
    NSString *_appName;	// 40 = 0x28
    NSNumber *_pid;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000ba226
@property(retain, nonatomic) NSNumber *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;

@end

