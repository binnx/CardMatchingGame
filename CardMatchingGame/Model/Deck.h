//
//  Deck.h
//  CardMatchingGame
//
//  Created by 7 on 14-3-7.
//  Copyright (c) 2014年 7. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;


-(Card *)drawRandomCard;

@end
