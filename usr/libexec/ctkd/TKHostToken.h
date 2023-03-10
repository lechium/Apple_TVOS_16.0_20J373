//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, NSXPCListenerEndpoint, TKHostTokenDriver, TKHostTokenRegistry, TKTokenID;
@protocol OS_dispatch_queue;

@interface TKHostToken : NSObject
{
    _Bool _persistent;	// 8 = 0x8
    _Bool _automatic;	// 9 = 0x9
    TKTokenID *_tokenID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    TKHostTokenRegistry *_registry;	// 32 = 0x20
    TKHostTokenDriver *_driver;	// 40 = 0x28
    NSString *_slotName;	// 48 = 0x30
    NSData *_configurationData;	// 56 = 0x38
    NSArray *_keychainItems;	// 64 = 0x40
    NSXPCListenerEndpoint *_endpoint;	// 72 = 0x48
    long long _connectionCount;	// 80 = 0x50
}

+ (id)keychainItemClasses;	// IMP=0x0020000000002cf9
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000023e4
- (void).cxx_destruct;	// IMP=0x0020000000003159
@property(nonatomic) long long connectionCount; // @synthesize connectionCount=_connectionCount;
@property(retain, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) NSArray *keychainItems; // @synthesize keychainItems=_keychainItems;
@property(retain, nonatomic) NSData *configurationData; // @synthesize configurationData=_configurationData;
@property(readonly, nonatomic) _Bool automatic; // @synthesize automatic=_automatic;
@property(readonly, nonatomic) _Bool persistent; // @synthesize persistent=_persistent;
@property(retain, nonatomic) NSString *slotName; // @synthesize slotName=_slotName;
@property(retain, nonatomic) TKHostTokenDriver *driver; // @synthesize driver=_driver;
@property(nonatomic) __weak TKHostTokenRegistry *registry; // @synthesize registry=_registry;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) TKTokenID *tokenID; // @synthesize tokenID=_tokenID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000002f6b
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000002e2f
- (id)connectionWithError:(id *)arg1;	// IMP=0x0010000000002604
- (id)description;	// IMP=0x001000000000250d
- (id)initWithTokenID:(id)arg1 persistent:(_Bool)arg2 automatic:(_Bool)arg3;	// IMP=0x00100000000023ec

@end

