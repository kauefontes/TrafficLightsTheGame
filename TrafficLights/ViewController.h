//
//  ViewController.h
//  TrafficLights
//
//  Created by Kaue Pereira on 10/10/18.
//  Copyright © 2018 Kaue Pereira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    
    NSTimer *timer;
    NSTimer *scoreTimer;
    
    int timerInt;
    int scoreInt;
    
}

@property (weak, nonatomic) IBOutlet UIImageView *trafficLights;
@property (weak, nonatomic) IBOutlet UILabel *scoreLabel;
@property (weak, nonatomic) IBOutlet UIButton *startButton;

- (IBAction)startStopButton:(id)sender;

@end

