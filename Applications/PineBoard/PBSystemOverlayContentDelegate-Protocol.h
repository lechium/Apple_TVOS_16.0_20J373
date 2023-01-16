//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol NSSecureCoding, PBSystemOverlayContentPresenting;

@protocol PBSystemOverlayContentDelegate <NSObject>
- (void)contentPresentingDidDismissContent:(id <PBSystemOverlayContentPresenting>)arg1;
- (void)contentPresenting:(id <PBSystemOverlayContentPresenting>)arg1 willDismissContentWithResult:(id <NSSecureCoding>)arg2 error:(NSError *)arg3;
@end
