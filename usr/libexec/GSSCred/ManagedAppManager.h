//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ManagedAppManager : NSObject
{
    NSArray *managedApps;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000112b0
@property(retain, nonatomic) NSArray *managedApps; // @synthesize managedApps;
- (_Bool)isManagedApp:(id)arg1 auditToken:(CDStruct_6ad76789)arg2;	// IMP=0x0010000000011210
- (void)dealloc;	// IMP=0x0010000000011190
- (id)init;	// IMP=0x00100000000110f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

