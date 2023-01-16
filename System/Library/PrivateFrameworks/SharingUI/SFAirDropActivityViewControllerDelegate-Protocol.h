//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SharingUI/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol SFAirDropActivityViewControllerDelegate <NSObject>
- (void)airDropActivityDidSuccessfullyStartTransfer;
- (void)airDropActivityDidSuccessfullyCompleteTransfer;
- (void)airDropActivityRequestingSharedItemsWithCompletionHandler:(void (^)(void))arg1;

@optional
- (void)airDropActivityDidReceiveInitialPeopleList;
- (void)nodePressedWithRecipients:(NSArray *)arg1;
- (void)nodePressedWithGUID:(NSString *)arg1 groupName:(NSString *)arg2 recipients:(NSArray *)arg3;
- (void)airDropActivityDidFailToStartTransfer;
- (void)airDropActivityRequestingSharedItemsWithOptions:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
- (void)airDropActivityDoneButtonPressed;
@end

