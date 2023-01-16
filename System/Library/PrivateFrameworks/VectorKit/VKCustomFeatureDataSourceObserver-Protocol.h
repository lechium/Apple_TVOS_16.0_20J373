//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/NSObject-Protocol.h>

@protocol VKCustomFeatureDataSource;

@protocol VKCustomFeatureDataSourceObserver <NSObject>
- (void)dataSource:(id <VKCustomFeatureDataSource>)arg1 didChangeSceneID:(unsigned char)arg2;
- (void)dataSource:(id <VKCustomFeatureDataSource>)arg1 didChangeSceneState:(unsigned char)arg2;
- (void)globalFeaturesDidChangeForDataSource:(id <VKCustomFeatureDataSource>)arg1;
- (void)dataSource:(id <VKCustomFeatureDataSource>)arg1 featuresDidChangeForRect:(CDStruct_90e2a262)arg2;
@end

