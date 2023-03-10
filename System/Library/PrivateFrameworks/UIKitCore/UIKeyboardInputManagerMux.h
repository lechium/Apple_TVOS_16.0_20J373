//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol TIKeyboardInputManager, _UIIVCResponseDelegateImpl;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerMux : NSObject
{
    NSMutableArray *_clients;	// 8 = 0x8
    id <_UIIVCResponseDelegateImpl> _responseDelegate;	// 16 = 0x10
    id <TIKeyboardInputManager> _systemInputManager;	// 24 = 0x18
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x0060000000a8de96
+ (id)sharedInstance;	// IMP=0x0060000000a8d6fb
- (void).cxx_destruct;	// IMP=0x0000000000a8e2a5
@property(retain, nonatomic) id <TIKeyboardInputManager> systemInputManager; // @synthesize systemInputManager=_systemInputManager;
@property(retain, nonatomic) id <_UIIVCResponseDelegateImpl> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000a8e072
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000a8e00b
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000a8df9a
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000a8df3f
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000a8deec
- (void)updateClientResponseDelegatesWithDelegate:(id)arg1;	// IMP=0x0000000000a8dcd1
- (void)releaseConnectedClients;	// IMP=0x0000000000a8dcbd
- (void)removeAllClients;	// IMP=0x0000000000a8dc7d
- (void)removeClient:(id)arg1;	// IMP=0x0000000000a8dc14
- (void)addClient:(id)arg1;	// IMP=0x0000000000a8db2b
- (void)setSystemInputManagerFromTextInputTraits:(id)arg1 autofillMode:(long long)arg2;	// IMP=0x0000000000a8d86e
@property(readonly, nonatomic) _Bool hasSystemInputManager;
- (_Bool)_systemHasKbd;	// IMP=0x0000000000a8d77a

@end

