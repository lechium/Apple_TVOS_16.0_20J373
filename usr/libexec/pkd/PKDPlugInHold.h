//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSSet, NSString, NSUUID, PKDXpcClient;
@protocol OS_os_transaction;

@interface PKDPlugInHold : NSObject
{
    NSUUID *_uuid;	// 8 = 0x8
    NSSet *_blocked;	// 16 = 0x10
    PKDXpcClient *_client;	// 24 = 0x18
    NSDate *_created;	// 32 = 0x20
    NSString *_extensionPointName;	// 40 = 0x28
    NSObject<OS_os_transaction> *_transaction;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000001783a
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(copy) NSString *extensionPointName; // @synthesize extensionPointName=_extensionPointName;
@property(retain) NSDate *created; // @synthesize created=_created;
@property __weak PKDXpcClient *client; // @synthesize client=_client;
@property(retain) NSSet *blocked; // @synthesize blocked=_blocked;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)description;	// IMP=0x0010000000017642
- (unsigned long long)hash;	// IMP=0x00100000000175fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000017550
- (id)initWithPlugIns:(id)arg1 extensionPointName:(id)arg2 forClient:(id)arg3;	// IMP=0x00100000000173ca

@end

