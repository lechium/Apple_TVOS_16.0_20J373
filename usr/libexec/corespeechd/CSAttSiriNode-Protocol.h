//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSAsset, CSAttSiriController, NSArray, NSString;
@protocol CSAttSiriNode;

@protocol CSAttSiriNode <NSObject>
@property(nonatomic) _Bool isReady;
@property(retain, nonatomic) CSAsset *prefetchedAsset;
@property(retain, nonatomic) NSString *mhId;
@property(retain, nonatomic) NSArray *requiredNodes;
@property(readonly, nonatomic) unsigned long long type;
@property(nonatomic) __weak CSAttSiriController *attSiriController;
- (void)stop;
- (void)pause;
- (void)start;
- (void)removeReceiver:(id <CSAttSiriNode>)arg1;
- (void)addReceiver:(id <CSAttSiriNode>)arg1;
- (id)initWithAttSiriController:(CSAttSiriController *)arg1;
- (id)init;
@end

