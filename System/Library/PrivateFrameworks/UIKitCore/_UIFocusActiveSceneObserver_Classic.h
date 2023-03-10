//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusActiveSceneObserver_Classic
{
    NSMapTable *_hidObserverMapTable;	// 16 = 0x10
    struct {
        unsigned int supportsHIDUpdates:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000156895
- (id)descriptionBuilder;	// IMP=0x00000000001567d8
- (void)_keyWindowDidChangeNotification:(id)arg1;	// IMP=0x0000000000156763
- (void)observerDeliveryPolicyDidChange:(id)arg1;	// IMP=0x00000000001566ee
- (void)_windowDidDetachContext:(id)arg1;	// IMP=0x0000000000156670
- (void)_windowDidAttachContext:(id)arg1;	// IMP=0x00000000001565f2
- (void)_removeDeliverObserverForWindow:(id)arg1;	// IMP=0x0000000000156557
- (void)_addDeliveryObserverForWindow:(id)arg1;	// IMP=0x0000000000156351
- (_Bool)isActive;	// IMP=0x00000000001560d5
- (void)dealloc;	// IMP=0x0000000000155f3c
- (void)stopMonitoringContextChangesForWindow:(id)arg1;	// IMP=0x0000000000155e47
- (void)beginMonitoringContextChangesForWindow:(id)arg1;	// IMP=0x0000000000155d44
- (id)_initWithScene:(id)arg1;	// IMP=0x0000000000155c6e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

