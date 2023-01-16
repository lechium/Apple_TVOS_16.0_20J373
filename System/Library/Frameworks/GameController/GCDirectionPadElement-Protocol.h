//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/GCPhysicalInputElement-Protocol.h>

@protocol GCAxisInput, GCLinearInput><GCPressedStateInput;

@protocol GCDirectionPadElement <GCPhysicalInputElement>
@property(nonatomic, readonly) id <GCLinearInput><GCPressedStateInput> right;
@property(nonatomic, readonly) id <GCLinearInput><GCPressedStateInput> left;
@property(nonatomic, readonly) id <GCLinearInput><GCPressedStateInput> down;
@property(nonatomic, readonly) id <GCLinearInput><GCPressedStateInput> up;
@property(nonatomic, readonly) id <GCAxisInput> yAxis;
@property(nonatomic, readonly) id <GCAxisInput> xAxis;
@end

