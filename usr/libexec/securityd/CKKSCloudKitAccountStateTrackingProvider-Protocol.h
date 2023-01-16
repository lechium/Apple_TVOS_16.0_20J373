//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol CKKSCloudKitAccountStateListener, OS_dispatch_semaphore;

@protocol CKKSCloudKitAccountStateTrackingProvider <NSObject>
@property(copy) NSString *ckdeviceID;
- (void)recheckCKAccountStatus;
- (_Bool)notifyCKAccountStatusChangeAndWait:(unsigned long long)arg1;
- (NSObject<OS_dispatch_semaphore> *)registerForNotificationsOfCloudKitAccountStatusChange:(id <CKKSCloudKitAccountStateListener>)arg1;
@end

