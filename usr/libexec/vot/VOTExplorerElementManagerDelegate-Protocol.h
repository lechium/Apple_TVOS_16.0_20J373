//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class VOTElement, VOTExplorerElementManager;

@protocol VOTExplorerElementManagerDelegate <NSObject>
- (_Bool)explorerElementManagerShouldBeInUnitTestingMode:(VOTExplorerElementManager *)arg1;
- (void)explorerElementManager:(VOTExplorerElementManager *)arg1 didFinishReadAll:(_Bool)arg2;
- (void)explorerElementManager:(VOTExplorerElementManager *)arg1 willReadElement:(VOTElement *)arg2;
- (void)explorerElementManager:(VOTExplorerElementManager *)arg1 didSetExplorerElementFocus:(VOTElement *)arg2;
- (void)willBeginReadAll:(VOTExplorerElementManager *)arg1;
@end
