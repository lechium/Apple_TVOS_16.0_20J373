//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol XCTDProcessAssertionManager, XCTDProcessMonitor, XCTDProcessMonitorDelegate;

@interface XCTDProcessManagementServicesProvider : NSObject
{
    _Bool _valid;	// 8 = 0x8
    id <XCTDProcessMonitor> _processMonitor;	// 16 = 0x10
    id <XCTDProcessMonitorDelegate> _processMonitorDelegate;	// 24 = 0x18
    id <XCTDProcessAssertionManager> _processAssertionManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001a376
@property _Bool valid; // @synthesize valid=_valid;
@property(readonly) id <XCTDProcessAssertionManager> processAssertionManager; // @synthesize processAssertionManager=_processAssertionManager;
@property __weak id <XCTDProcessMonitorDelegate> processMonitorDelegate; // @synthesize processMonitorDelegate=_processMonitorDelegate;
@property(readonly) id <XCTDProcessMonitor> processMonitor; // @synthesize processMonitor=_processMonitor;
- (void)applicationDidUpdateState:(id)arg1;	// IMP=0x001000000001a2a1
- (id)init;	// IMP=0x001000000001a229
- (id)initWithProcessMonitor:(id)arg1 processAssertionManager:(id)arg2;	// IMP=0x001000000001a193
- (void)invalidate;	// IMP=0x001000000001a051
- (void)dealloc;	// IMP=0x0010000000019f9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

