//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PineBoardServices/NSObject-Protocol.h>

@protocol PBSAppInfoDelegateServiceInterface;

@protocol PBSAppInfoServiceInterface <NSObject>
- (void)appInfoUpdatesWithReply:(void (^)(PBSAppInfoControllerUpdate *))arg1;
- (void)setServiceDelegate:(id <PBSAppInfoDelegateServiceInterface>)arg1;
@end

