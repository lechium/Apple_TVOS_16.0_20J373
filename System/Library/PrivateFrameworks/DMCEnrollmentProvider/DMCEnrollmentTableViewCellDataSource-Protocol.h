//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DMCEnrollmentProvider/NSObject-Protocol.h>

@class UITableViewCell;

@protocol DMCEnrollmentTableViewCellDataSource <NSObject>
- (double)estimatedCellHeight;
- (double)cellHeight;
- (UITableViewCell *)cell;

@optional
- (double)gapToNextSection;
@end

