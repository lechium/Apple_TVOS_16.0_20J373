//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SSErrorHandler;
@protocol PBUserNotificationDelegate;

@interface PBUserNotificationCenter : NSObject
{
    _Bool _connected;	// 8 = 0x8
    id <PBUserNotificationDelegate> _delegate;	// 16 = 0x10
    SSErrorHandler *_errorHandler;	// 24 = 0x18
    NSMutableDictionary *_registeredOperationClasses;	// 32 = 0x20
}

+ (void)initializeNotificationCenterWithDelegate:(id)arg1;	// IMP=0x00200000000dfdc1
+ (id)sharedInstance;	// IMP=0x00100000000dfdaf
- (void).cxx_destruct;	// IMP=0x00200000000e1633
@property(retain, nonatomic) NSMutableDictionary *registeredOperationClasses; // @synthesize registeredOperationClasses=_registeredOperationClasses;
@property(getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(retain, nonatomic) SSErrorHandler *errorHandler; // @synthesize errorHandler=_errorHandler;
@property(nonatomic) __weak id <PBUserNotificationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleCarMCheck:(id)arg1;	// IMP=0x00100000000e131a
- (void)_handle2SVCheck:(id)arg1;	// IMP=0x00100000000e1076
- (void)_handleCVVCheck:(id)arg1;	// IMP=0x00100000000e0db2
- (void)errorHandler:(id)arg1 handleSession:(id)arg2;	// IMP=0x00100000000e0b92
- (void)errorHandlerDidDisconnect:(id)arg1;	// IMP=0x00100000000e0a86
- (void)stopErrorHandler;	// IMP=0x00100000000e09da
- (void)startErrorHandler;	// IMP=0x00100000000e0825
- (void)initializeStoreErrorHandler;	// IMP=0x00100000000e0706
- (void)registerOperationClass:(Class)arg1 forFailureType:(long long)arg2;	// IMP=0x00100000000e0682
- (void)_didHandleCFUserNotification:(id)arg1;	// IMP=0x00100000000e0663
- (id)cfUserNotificationForToken:(int)arg1;	// IMP=0x00100000000e050c
- (void)startUserNotificationCenter;	// IMP=0x00100000000dfee2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
