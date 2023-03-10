//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface IDSQuickSwitchAcknowledgementTracker : NSObject
{
    NSMutableSet *_delegateIdentifiers;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _delegateIdentifiersMutex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000076acd
- (void)_accessDelegateIdentifiersInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000076a83
- (void)stopAwaitingAcknowledgementFromAllServiceDelegates;	// IMP=0x0000000000076935
- (void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:(id)arg1;	// IMP=0x0000000000076772
- (id)identifierForServiceDelegate:(id)arg1;	// IMP=0x0000000000076618
- (id)awaitAcknowledgementFromServiceDelegate:(id)arg1;	// IMP=0x0000000000076379
@property(readonly, nonatomic) _Bool isAwaitingAcknowledgement;
- (void)dealloc;	// IMP=0x000000000007626e
- (id)init;	// IMP=0x0000000000076190

@end

