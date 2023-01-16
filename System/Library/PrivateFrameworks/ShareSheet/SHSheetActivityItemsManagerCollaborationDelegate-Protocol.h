//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/NSObject-Protocol.h>

@class NSArray, NSString, SHSheetActivityItemsManager, UIActivity;

@protocol SHSheetActivityItemsManagerCollaborationDelegate <NSObject>
- (NSString *)activityItemsManager:(SHSheetActivityItemsManager *)arg1 subjectForActivity:(UIActivity *)arg2;
- (NSArray *)activityItemsManager:(SHSheetActivityItemsManager *)arg1 collaborationActivityItemValuesForActivityItemValue:(NSArray *)arg2 activity:(UIActivity *)arg3;
- (NSArray *)collaborationPlaceholderActivityItemsForActivityItemsManager:(SHSheetActivityItemsManager *)arg1;
@end
