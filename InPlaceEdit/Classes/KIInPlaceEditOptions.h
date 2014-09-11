//
//  KIInPlaceEditOptions.h
//  InPlaceEdit
//
//  Created by kaiinui on 2014/09/12.
//  Copyright (c) 2014年 kaiinui. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, KIInPlaceEditGesture) {
    KIInPlaceEditGestureLongPress
};

@interface KIInPlaceEditOptions : NSObject

@property BOOL showPrompt;
@property KIInPlaceEditGesture gesture;

+ (instancetype)longPressToEdit;
+ (instancetype)longPressAndPromptToEdit;

@end