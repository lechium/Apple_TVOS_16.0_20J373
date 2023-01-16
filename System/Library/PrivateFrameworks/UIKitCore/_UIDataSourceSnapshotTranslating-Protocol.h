//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIDataSourceSnapshot-Protocol.h>

@class NSIndexPath;

@protocol _UIDataSourceSnapshotTranslating <_UIDataSourceSnapshot>
- (long long)globalIndexForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)indexPathForGlobalIndex:(long long)arg1;
- (long long)sectionForGlobalIndex:(long long)arg1;
- (struct _NSRange)rangeForSection:(long long)arg1;
- (long long)numberOfItems;
@end

