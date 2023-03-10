//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKeychainWrapper, IMSystemMonitor, MISSING_TYPE, NSString;

@interface IDSPersistentMapKeychainPersister : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    IDSKeychainWrapper *_keychainWrapper;	// 16 = 0x10
    MISSING_TYPE *_systemMonitor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000005a14b0
@property(readonly, nonatomic) IMSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property(readonly, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)purgeData;	// IMP=0x00100000005a1230
- (void)saveData:(id)arg1;	// IMP=0x00100000005a0e40
- (id)data;	// IMP=0x00100000005a0aa0
@property(readonly, nonatomic) _Bool isAvailable;
- (id)initWithIdentifier:(id)arg1 keychainWrapper:(id)arg2 systemMonitor:(id)arg3;	// IMP=0x00100000005a0910

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

