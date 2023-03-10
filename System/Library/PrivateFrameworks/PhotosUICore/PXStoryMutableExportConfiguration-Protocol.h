//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString, PXStoryExportConfiguration;
@protocol PXStoryErrorReporter;

@protocol PXStoryMutableExportConfiguration <NSObject>
@property(nonatomic) __weak id <PXStoryErrorReporter> errorReporter;
@property(retain, nonatomic) NSString *activityCategory;
@property(retain, nonatomic) NSString *activityType;
- (void)copyOptionalPropertiesFromOtherExportConfiguration:(PXStoryExportConfiguration *)arg1;
@end

